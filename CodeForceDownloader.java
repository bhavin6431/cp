import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.parser.Parser;
import org.jsoup.select.Elements;

public class CodeForceDownloader {
	public static void main(String args[]) throws IOException, InterruptedException {
		Document doc = Jsoup.connect("https://codeforces.com/submissions/bhavin6431/page/16").get();
		Elements elements = doc.getElementsByAttribute("data-submission-id");
		for (Element ele : elements) {
			String submissionId = ele.getElementsByClass("view-source").get(0).attr("submissionid");
			System.out.println("Submission id : " + submissionId);
			String verdict = ele.getElementsByClass("submissionVerdictWrapper").html();
			if (verdict.contains("Accepted")) {
				System.out.println("Submission Id Accepted : " + submissionId);
				String ref = ele.getElementsByClass("view-source").get(0).attr("href");
				Document doc1 = Jsoup.connect("https://codeforces.com" + ref).get();
				System.out.println("Url : " + "https://codeforces.com"
						+ ele.getElementsByClass("view-source").get(0).attr("href"));
				Elements elements1 = doc1.getElementsByAttribute("title");
				File file;
				FileWriter fw = null;
				String problem = ref.substring(ref.indexOf("/contest/") + 9, ref.indexOf("/submission/"));
				for (Element ele1 : elements1) {
					if (ele1.attr("href").startsWith("/contest/" + problem)
							&& ele1.attr("href").contains("/problem/")) {
						System.out.println(ele1);
						String folderName = ele1.html();
						file = new File("c:/tmp/" + folderName);
						file.mkdir();
						Element sourceCode = doc1.getElementById("program-source-text");
						String html = Parser.unescapeEntities(sourceCode.html(), false);
						if (html.contains("#include")) {
							System.out.println("c:/tmp/" + folderName + "/Solution.cpp");
							fw = new FileWriter("c:/tmp/" + folderName + "/Solution.cpp");
						} else {
							System.out.println("c:/tmp/" + folderName + "/Solution.java");
							fw = new FileWriter("c:/tmp/" + folderName + "/Solution.java");

						}
						fw.write(html);
						fw.close();
					}
				}
			}

		}

	}
}
