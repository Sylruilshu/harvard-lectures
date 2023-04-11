from PIL import Image, ImageFilter


image = Image.open("bridge.bmp")
output_image = image.filter(ImageFilter.FIND_EDGES)

output_image.save("bridge_edges.bmp")